all: dirs \
	 Lib/c/decode \
	 Lib/c/identify \
	 Lib/c/quirc \
	 Lib/h/quirc \
	 Lib/h/quirc_internal \
	 Lib/c/version_db \
	 Tests/c/dbgutil \
	 Tests/h/dbgutil \
	 Tests/c/inspect \
	 Tests/c/qrtest

dirs:
	mkdir -p Lib/c Lib/h Tests/c Tests/h

Lib/c/decode: ../lib/decode.c
	ln -sf ../../$? $@
Lib/c/identify: ../lib/identify.c
	ln -sf ../../$? $@
Lib/c/quirc: ../lib/quirc.c
	ln -sf ../../$? $@
Lib/c/version_db: ../lib/version_db.c
	ln -sf ../../$? $@
Lib/h/quirc: ../lib/quirc.h
	ln -sf ../../$? $@
Lib/h/quirc_internal: ../lib/quirc_internal.h
	ln -sf ../../$? $@

Tests/c/dbgutil: ../tests/dbgutil.c
	ln -sf ../../$? $@
Tests/h/dbgutil: ../tests/dbgutil.h
	ln -sf ../../$? $@
Tests/c/inspect: ../tests/inspect.c
	ln -sf ../../$? $@
Tests/c/qrtest: ../tests/qrtest.c
	ln -sf ../../$? $@
