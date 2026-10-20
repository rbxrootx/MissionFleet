// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58787790 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_58787790_58787790() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], edx
        push 0
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 55 F8: call dword ptr [ebp - 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf8
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 98h], 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5D 00 00 00: call 0x58787820
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 D2 CF FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xd2
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 D2 CF FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xd2
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2C DE 02 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 14 DF D0 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xdf
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        add edx, 3e8h
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 72 E6 CF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xe6
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
