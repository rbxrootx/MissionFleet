// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DF858 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_004df858_004DF858() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 74 5C 04 00: call 0x5254da
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 E8: mov word ptr [ebp - 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 85 5C 04 00: call 0x5254f7
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 EA: mov word ptr [ebp - 0x16], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xea
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 94 5C 04 00: call 0x525512
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 EE: mov word ptr [ebp - 0x12], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xee
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A0 5C 04 00: call 0x52552a
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F0: mov word ptr [ebp - 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AC 5C 04 00: call 0x525542
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B8 5C 04 00: call 0x52555a
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 66 C7 45 F6 00 00: mov word ptr [ebp - 0xa], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 E4 B8 68 00: call dword ptr [0x68b8e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x4df8cc
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 C4 AD FF FF: call 0x4da690
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 E8 B8 68 00: call dword ptr [0x68b8e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x4df8ec
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 A4 AD FF FF: call 0x4da690
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
