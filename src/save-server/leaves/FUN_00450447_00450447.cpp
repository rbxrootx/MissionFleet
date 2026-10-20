// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00450447 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_00450447_00450447() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ddf9h
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
        ; Exact mapped bytes EB 39: jmp 0x4504cb
        __asm _emit 0xeb
        __asm _emit 0x39
        push 636e20h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F1 9C 08 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x9c
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4504b7
        __asm _emit 0x75
        __asm _emit 0x14
        push 50fh
        push 67702ch
    }
}
