// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B2340 .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_584b2340_584B2340() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 0ch], ecx
        push 5f3h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 27 FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x27
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BC 3B FD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x3b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 14h], ecx
        push 0c7h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 27 FD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x27
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C1 48 FD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x48
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 1ch], ecx
        push 5f4h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 27 FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x27
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 66 3B FD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
