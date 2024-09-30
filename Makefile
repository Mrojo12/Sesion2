.PHONY: clean All

All:
	@echo "----------Building project:[ Ejemplo04 - Debug ]----------"
	@cd "Ejemplo04" && "$(MAKE)" -f  "Ejemplo04.mk"
clean:
	@echo "----------Cleaning project:[ Ejemplo04 - Debug ]----------"
	@cd "Ejemplo04" && "$(MAKE)" -f  "Ejemplo04.mk" clean
