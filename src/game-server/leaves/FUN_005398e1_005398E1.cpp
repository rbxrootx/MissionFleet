// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005398E1 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_005398e1_005398E1() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x539908
        __asm _emit 0x75
        __asm _emit 0x14
        push 317h
        push 581fc0h
        ; Exact mapped bytes E8 FD B0 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x539908
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5398eb
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 10h]
        and edx, 18000h
        cmp edx, 18000h
        ; Exact mapped bytes 75 14: jne 0x539933
        __asm _emit 0x75
        __asm _emit 0x14
        push 319h
        push 581fc0h
        ; Exact mapped bytes E8 D2 B0 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x539933
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x53990e
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 14000h
        cmp ecx, 14000h
        ; Exact mapped bytes 75 14: jne 0x53995e
        __asm _emit 0x75
        __asm _emit 0x14
        push 31ah
        push 581fc0h
        ; Exact mapped bytes E8 A7 B0 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53995e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x539939
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EC 75 FF FF: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2D 76 FF FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 70: call dword ptr [eax + 0x70]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x70
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
