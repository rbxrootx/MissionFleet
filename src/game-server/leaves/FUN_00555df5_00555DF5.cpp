// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00555DF5 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_00555df5_00555DF5() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 52dh
        push 5cfa08h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 4E 53 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x53
        __asm _emit 0xfa
        __asm _emit 0xff
        push 1
        push 10h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 37 A0 F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xa0
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x555e37
        __asm _emit 0x75
        __asm _emit 0x14
        push 52eh
        push 5cfa08h
        ; Exact mapped bytes E8 CE EB FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555e37
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x555e12
        __asm _emit 0x75
        __asm _emit 0xd5
        push 531h
        push 5cfa08h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        push ecx
        ; Exact mapped bytes E8 0D 53 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x53
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 99 62 FE FF: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x62
        __asm _emit 0xfe
        __asm _emit 0xff
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
