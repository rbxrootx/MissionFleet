// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BE6B0 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_004be6b0_004BE6B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        lea eax, [ebp + 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 6D 00 00 00: call 0x4be730
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        lea edx, [ebp - 28h]
        push edx
        push 0
        push 11h
        sub esp, 0ch
        mov eax, esp
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [eax + 4], edx
        ; Exact mapped bytes 66 8B 4D FC: mov cx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 66 89 48 08: mov word ptr [eax + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes E8 65 64 00 00: call 0x4c4b50
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx + 8], eax
        ; Exact mapped bytes 0F BE 45 DA: movsx eax, byte ptr [ebp - 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xda
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes 0F BF 55 D8: movsx edx, word ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xd8
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax + 4], edx
        lea ecx, [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 2C B7 FE FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [eax + 0ch], ecx
        mov eax, dword ptr [ebp + 10h]
        mov esp, ebp
        pop ebp
        ret
    }
}
