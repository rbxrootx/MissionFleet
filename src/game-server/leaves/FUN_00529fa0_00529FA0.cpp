// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00529FA0 .. +0x19F bytes.
extern "C" __declspec(naked) void FUN_00529fa0_00529FA0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57de84h
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
        ; Exact mapped bytes E8 80 73 FC FF: call 0x4f1347
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x73
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 58h
        ; Exact mapped bytes E8 78 BD 00 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ah
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 6ch
        ; Exact mapped bytes E8 0A D0 FB FF: call 0x4e6ff0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xd0
        __asm _emit 0xfb
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0ach
        ; Exact mapped bytes E8 0F 6F 00 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58630ch
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 11: je 0x52a01f
        __asm _emit 0x74
        __asm _emit 0x11
        push 67h
        push 5c8fcch
        ; Exact mapped bytes E8 E6 A9 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52a01f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x52a005
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
        ; Exact mapped bytes E8 74 BF 00 00: call 0x53604b
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xbf
        __asm _emit 0x00
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
        ; Exact mapped bytes E8 B3 00 00 00: call 0x52a1d7
        __asm _emit 0xe8
        __asm _emit 0xb3
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
