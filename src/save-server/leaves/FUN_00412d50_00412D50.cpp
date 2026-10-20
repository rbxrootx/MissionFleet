// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00412D50 .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_00412d50_00412D50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 4ch]
        mov ecx, 13h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F E9 FE FF: call 0x4016a4
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 6B: jae 0x412de5
        __asm _emit 0x73
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4E E5 FE FF: call 0x4012d0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 26: je 0x412db3
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 E4 FE FF: call 0x40126c
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3D E5 FE FF: call 0x4012ee
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 12: jmp 0x412dc5
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 F0 E9 FE FF: call 0x4017b2
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CE E3 FE FF: call 0x4011b3
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 4ch
        cmp ebp, esp
        ; Exact mapped bytes E8 FE 1F 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x1f
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
