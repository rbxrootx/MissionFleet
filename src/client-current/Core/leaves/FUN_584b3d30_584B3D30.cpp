// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B3D30 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_584b3d30_584B3D30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 0ch], ecx
        push 14h
        ; Exact mapped bytes 8B 0D B4 07 96 58: mov ecx, dword ptr [0x589607b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE 0D FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x0d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CF 21 FD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x21
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 14h], ecx
        push 1
        ; Exact mapped bytes 8B 0D B4 07 96 58: mov ecx, dword ptr [0x589607b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 0D FD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x0d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D7 2E FD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x2e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 1ch], ecx
        push 18h
        ; Exact mapped bytes 8B 0D B4 07 96 58: mov ecx, dword ptr [0x589607b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E 0D FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x0d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 7F 21 FD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x21
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
