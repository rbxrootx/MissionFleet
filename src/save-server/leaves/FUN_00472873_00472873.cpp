// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00472873 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_00472873_00472873() {
    __asm {
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 33: jne 0x4728ac
        __asm _emit 0x75
        __asm _emit 0x33
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x472886
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 1
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0fh
        and ecx, 0fffffff0h
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        ; Exact mapped bytes 8B 0D 88 89 68 00: mov ecx, dword ptr [0x688988]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 5C B8 68 00: call dword ptr [0x68b85c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 09: jne 0x4728bb
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 83 3D 34 74 68 00 00: cmp dword ptr [0x687434], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x4728c3
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes E9 5F 02 00 00: jmp 0x472b22
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 B4 F9 FF FF: call 0x472280
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4728da
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 48 02 00 00: jmp 0x472b22
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 27 FE FF FF: jmp 0x472706
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
