// CWarehouseItemForce virtual slot +0x28. Ghidra shows a conjunction:
// ([this + 0x6A] == arg1) && ([this + 0x6B] == arg2), returning 1 or 0.
extern "C" __declspec(naked) unsigned char FUN_588f7d10() {
    __asm {
        movzx eax, byte ptr [ecx + 0x6A]
        cmp eax, dword ptr [esp + 4]
        jne mismatch
        movzx ecx, byte ptr [ecx + 0x6B]
        cmp ecx, dword ptr [esp + 8]
        jne mismatch
        mov al, 1
        ret 8
    mismatch:
        xor al, al
        ret 8
    }
}
