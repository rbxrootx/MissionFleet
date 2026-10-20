// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413010 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_00413010_00413010() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 50h]
        mov ecx, 14h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x41303f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 86 E2 FE FF: call 0x4012d0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 73 4D: jae 0x41309c
        __asm _emit 0x73
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 01 E0 FE FF: call 0x40105f
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1C: je 0x413085
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 37 EA FE FF: call 0x401ab4
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB DE: jmp 0x413063
        __asm _emit 0xeb
        __asm _emit 0xde
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 CB DF FE FF: call 0x40105f
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 0
        ; Exact mapped bytes EB 9A: jmp 0x413036
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10h], 0
        pop edi
        pop esi
        pop ebx
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 3D 1D 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x1d
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
