// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B20A0 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_584b20a0_584B20A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 0ch], ecx
        push 6
        ; Exact mapped bytes 8B 0D D0 07 96 58: mov ecx, dword ptr [0x589607d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E 2A FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x2a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5F 3E FD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x3e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 14h], ecx
        push 1
        ; Exact mapped bytes 8B 0D D0 07 96 58: mov ecx, dword ptr [0x589607d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 29 FD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x29
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 67 4B FD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x4b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 1ch], ecx
        push 9
        ; Exact mapped bytes 8B 0D D0 07 96 58: mov ecx, dword ptr [0x589607d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E 2A FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x2a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 0F 3E FD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x3e
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
