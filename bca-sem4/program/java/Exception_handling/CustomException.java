class CustomException extends Exception {
	public String msg;

	public CustomException(String msg) {
		this.msg = msg;
	}

    public String getMessage(){
        return msg;
    }

	static public void main(String a[]) {
		CustomException e = new CustomException("CustomException thrown");
		System.out.println(e.getMessage());
	}
}

