// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004583EF .. +0x9E bytes.
extern "C" __declspec(naked) void FUN_004583ef_004583EF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], 0dh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 45 71 FF FF: call 0x44f555
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 40h
        mov esi, esp
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 38h]
        push eax
        ; Exact mapped bytes FF 15 5C 24 5E 00: call dword ptr [0x5e245c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B3 03 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x45843f
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        push 0
        push 5b8bcch
        ; Exact mapped bytes E8 42 54 0B 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x54
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 40h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 AC 56 09 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x56
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b8be8h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 F4 5A 09 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x5a
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 3A 8B 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 60 24 5E 00: call dword ptr [0x5e2460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 62 03 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 57 03 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
