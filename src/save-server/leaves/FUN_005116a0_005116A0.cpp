// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005116A0 .. +0x19F bytes.
extern "C" __declspec(naked) void FUN_005116a0_005116A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58cd64h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B0 DB FB FF: call 0x4cf277
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xdb
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 58h
        ; Exact mapped bytes E8 EE 0A 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        push 0ah
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 6ch
        ; Exact mapped bytes E8 FA FC FA FF: call 0x4c13e0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xfc
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0ach
        ; Exact mapped bytes E8 0F 36 01 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 6373c4h
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 11: je 0x51171f
        __asm _emit 0x74
        __asm _emit 0x11
        push 67h
        push 673dc0h
        ; Exact mapped bytes E8 26 76 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51171f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x511705
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 40h], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 3ch], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 9ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 44h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 48h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 90h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 94h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 98h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0a0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 68h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0a8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0b8h], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 58h
        ; Exact mapped bytes E8 CC 0C 02 00: call 0x5324a3
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 50h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 54h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0b0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0b4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 88h], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D2 00 00 00: call 0x5118f6
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
