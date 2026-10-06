// CWarehouseItemForce virtual slot +0x20. Ghidra shows argument 0 setting bit
// 0 in ([this + 0xC0] + 0x24), argument 1 clearing it, and other values no-op.
// The child control's semantic role remains unknown.
extern "C" __declspec(naked) void FUN_588f8840() {
    __asm {
        movzx eax, byte ptr [esp + 4]
        sub eax, 0
        je argument_zero
        sub eax, 1
        jne done
        mov eax, dword ptr [ecx + 0xC0]
        mov ecx, 0xFFFE
        and word ptr [eax + 0x24], cx
        ret 4
    argument_zero:
        mov eax, dword ptr [ecx + 0xC0]
        or word ptr [eax + 0x24], 1
    done:
        ret 4
    }
}
