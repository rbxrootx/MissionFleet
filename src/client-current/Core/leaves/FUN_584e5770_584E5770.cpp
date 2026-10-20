// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E5770 .. +0xE9 bytes.
extern "C" __declspec(naked) void FUN_584e5770_584E5770() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0c0h]
        ; Exact mapped bytes E8 1D 69 FA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x69
        __asm _emit 0xfa
        __asm _emit 0xff
        add eax, 0ah
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        ; Exact mapped bytes E8 19 12 FA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x12
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 66 FE 2C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0x2c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0c4h]
        ; Exact mapped bytes E8 DC 68 FA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x68
        __asm _emit 0xfa
        __asm _emit 0xff
        add eax, 0fh
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        ; Exact mapped bytes E8 D8 11 FA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x11
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 25 FE 2C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0x2c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c8h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0c0h]
        ; Exact mapped bytes E8 9B 68 FA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x68
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        ; Exact mapped bytes E8 9A 11 FA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x11
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E7 FD 2C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xfd
        __asm _emit 0x2c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c8h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 2C 45 FD FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x45
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
