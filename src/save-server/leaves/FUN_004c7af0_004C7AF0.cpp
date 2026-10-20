// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C7AF0 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_004c7af0_004C7AF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 0c7h
        push 67482ch
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 54 27 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 01 FF FF FF: call 0x4c7a1d
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x4c7b29
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 10: jmp 0x4c7b39
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax], edx
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
