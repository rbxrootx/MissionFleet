// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00412330 .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_00412330_00412330() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push esi
        lea eax, [ebp - 4]
        push edi
        push eax
        lea eax, [ebp - 2]
        push 2
        mov esi, ecx
        push eax
        push 9
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 41 A2 01 00: call 0x42c58e
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x412363
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 24: call dword ptr [eax + 0x24]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 7D FE 01: cmp word ptr [ebp - 2], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0x01
        ; Exact mapped bytes 7D 0C: jge 0x412376
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov eax, dword ptr [esi]
        push 3f6h
        mov ecx, esi
        ; Exact mapped bytes FF 50 24: call dword ptr [eax + 0x24]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x24
        lea eax, [ebp - 4]
        push eax
        lea eax, [ebp - 6]
        push 2
        push eax
        push 0fh
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 04 A2 01 00: call 0x42c58e
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x4123a0
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 24: call dword ptr [eax + 0x24]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 7D FA 00: cmp word ptr [ebp - 6], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xfa
        __asm _emit 0x00
        ; Exact mapped bytes 7D 0C: jge 0x4123b3
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov eax, dword ptr [esi]
        push 3f7h
        mov ecx, esi
        ; Exact mapped bytes FF 50 24: call dword ptr [eax + 0x24]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x24
        pop edi
        pop esi
        leave
        ret
    }
}
