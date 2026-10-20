// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585646C0 .. +0x1FE bytes.
extern "C" __declspec(naked) void FUN_585646c0_585646C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888373ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 14h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        movzx eax, word ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7B E4 FF FF: call 0x58562b80
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 588a95b4h
        push 0b4h
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 18ch
        push eax
        ; Exact mapped bytes E8 E6 86 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x86
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 70h], 0
        xor edx, edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 90 4C 02 00 00: mov word ptr [eax + 0x24c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 250h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 254h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 3d4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 320h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 26ch], 0
        push 4800h
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 3e4h
        push eax
        ; Exact mapped bytes E8 77 86 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x86
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        push 0ach
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 270h
        push ecx
        ; Exact mapped bytes E8 5E 86 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x86
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        push 0ach
        push 0
        mov edx, dword ptr [ebp - 10h]
        add edx, 324h
        push edx
        ; Exact mapped bytes E8 45 86 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x86
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 31ch], 55555555h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 3d0h], 55555555h
        push 58h
        ; Exact mapped bytes E8 15 C8 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 23: je 0x58564822
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 26h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F3 1F F2 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x1f
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x58564829
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 3d8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 3d8h]
        mov dword ptr [ebp - 20h], edx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 FB AC F3 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xac
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 25ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 260h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 264h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 268h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 3dch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 3e0h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
