// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052E7E3 .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_0052e7e3_0052E7E3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 83 3D FC E8 5D 00 00: cmp dword ptr [0x5de8fc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 3F: je 0x52e835
        __asm _emit 0x74
        __asm _emit 0x3f
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 20h]
        and ecx, 600h
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x52e817
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 20h]
        or eax, 40000h
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 20h], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 20h]
        and eax, 0c00000h
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x52e835
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 2ch]
        or dl, 80h
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 2ch], edx
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2D C6 FF FF: call 0x52ae6e
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x52e859
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b6h
        push 5ccab0h
        ; Exact mapped bytes E8 AC 61 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52e859
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x52e835
        __asm _emit 0x75
        __asm _emit 0xd6
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 2ch]
        and ch, 0fdh
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 2ch], ecx
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
