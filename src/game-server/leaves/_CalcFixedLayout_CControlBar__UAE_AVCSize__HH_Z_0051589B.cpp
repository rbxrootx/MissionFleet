// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051589B .. +0x6C bytes.
extern "C" __declspec(naked) void _CalcFixedLayout_CControlBar__UAE_AVCSize__HH_Z_0051589B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 0ch], ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 86 FD 01 00: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 0F: je 0x5158c1
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 09: je 0x5158c1
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 7fffh
        ; Exact mapped bytes EB 07: jmp 0x5158c8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 0F: je 0x5158e3
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 09: jne 0x5158e3
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 7fffh
        ; Exact mapped bytes EB 07: jmp 0x5158ea
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
