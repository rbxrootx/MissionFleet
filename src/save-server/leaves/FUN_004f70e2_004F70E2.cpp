// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F70E2 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_004f70e2_004F70E2() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 6ah
        push 6725c8h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 67 31 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 75 0E: jne 0x4f7113
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes EB 1B: jmp 0x4f712e
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ach]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 0ach]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
