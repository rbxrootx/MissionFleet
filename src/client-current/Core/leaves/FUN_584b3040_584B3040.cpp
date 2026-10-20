// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B3040 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_584b3040_584B3040() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 0ch], ecx
        push 14h
        ; Exact mapped bytes 8B 0D D4 06 96 58: mov ecx, dword ptr [0x589606d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE 1A FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x1a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BF 2E FD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x2e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 14h], ecx
        push 2
        ; Exact mapped bytes 8B 0D D4 06 96 58: mov ecx, dword ptr [0x589606d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 1A FD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x1a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C7 3B FD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x3b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 1ch], ecx
        push 18h
        ; Exact mapped bytes 8B 0D D4 06 96 58: mov ecx, dword ptr [0x589606d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E 1A FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x1a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 6F 2E FD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x2e
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
