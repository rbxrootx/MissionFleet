// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00493E22 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_00493e22_00493E22() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e359h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 14h], 1
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 14h]
        push eax
        push 0bh
        push 0fffffdfeh
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 6C: call dword ptr [eax + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x6c
        ; Exact mapped bytes EB 39: jmp 0x493ea6
        __asm _emit 0xeb
        __asm _emit 0x39
        push 584850h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 16 72 06 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x72
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x493e92
        __asm _emit 0x75
        __asm _emit 0x14
        push 50fh
        push 5ca8a4h
    }
}
