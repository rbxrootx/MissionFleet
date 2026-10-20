// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049365E .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_0049365e_0049365E() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e31fh
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
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 20h], ecx
        push -14h
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 66 C7 45 E8 00 00: mov word ptr [ebp - 0x18], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 18h]
        push edx
        push 2
        push 0fffffdf8h
        mov ecx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        ; Exact mapped bytes 0F BF 45 E8: movsx eax, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe8
        cmp eax, 1
        ; Exact mapped bytes 75 09: jne 0x4936ca
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        or ch, 2
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 39: jmp 0x493705
        __asm _emit 0xeb
        __asm _emit 0x39
        push 584850h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B7 79 06 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x79
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4936f1
        __asm _emit 0x75
        __asm _emit 0x14
        push 44ah
        push 5ca8a4h
    }
}
