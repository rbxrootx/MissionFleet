// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DAF50 .. +0x149 bytes.
extern "C" __declspec(naked) void FUN_004daf50_004DAF50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 90h
        push 0
        ; Exact mapped bytes FF 15 0C BE 68 00: call dword ptr [0x68be0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 3ch
        push 0
        lea eax, [ebp - 4ch]
        push eax
        ; Exact mapped bytes E8 4F A9 F8 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xa9
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        push 48h
        push 5ah
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 30 B4 68 00: call dword ptr [0x68b430]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffffh
        push edx
        ; Exact mapped bytes FF 15 B4 B9 68 00: call dword ptr [0x68b9b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        neg eax
        mov dword ptr [ebp - 4ch], eax
        mov dword ptr [ebp - 3ch], 190h
        mov byte ptr [ebp - 35h], 1
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 30h]
        push ecx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        lea edx, [ebp - 4ch]
        push edx
        ; Exact mapped bytes FF 15 D0 B3 68 00: call dword ptr [0x68b3d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xb3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 74: je 0x4db038
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 40 B4 68 00: call dword ptr [0x68b440]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 90h], eax
        lea edx, [ebp - 8ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 F4 B4 68 00: call dword ptr [0x68b4f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8ch]
        add ecx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 4], ecx
        lea edx, [ebp - 54h]
        push edx
        push 34h
        push 675b98h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 E4 B4 68 00: call dword ptr [0x68b4e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 54h]
        add eax, 1ah
        cdq
        mov ecx, 34h
        idiv ecx
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 90h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 40 B4 68 00: call dword ptr [0x68b440]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 30 B6 68 00: call dword ptr [0x68b630]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 24: jmp 0x4db05c
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes FF 15 48 BC 68 00: call dword ptr [0x68bc48]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes FF 15 48 BC 68 00: call dword ptr [0x68bc48]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        shr eax, 10h
        and eax, 0ffffh
        and eax, 0ffffh
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 0
        ; Exact mapped bytes FF 15 04 BE 68 00: call dword ptr [0x68be04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push 4
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes FF 15 B4 B9 68 00: call dword ptr [0x68b9b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edx], eax
        push 8
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        ; Exact mapped bytes FF 15 B4 B9 68 00: call dword ptr [0x68b9b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edx + 4], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
