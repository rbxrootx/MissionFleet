// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413510 .. +0xDE bytes.
extern "C" __declspec(naked) void FUN_00413510_00413510() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 54h]
        mov ecx, 15h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9B DD FE FF: call 0x4012d0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp + 14h]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 EB E1 FE FF: call 0x401730
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 53 E2 FE FF: call 0x4017b2
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 C5 DC FE FF: call 0x40123a
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 79 DA FE FF: call 0x401005
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp + 18h]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 75 1A: jne 0x4135b9
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 87 DC FE FF: call 0x40123a
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2D DD FE FF: call 0x4012ee
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*4]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D8 DB FE FF: call 0x4011b3
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 54h
        cmp ebp, esp
        ; Exact mapped bytes E8 08 18 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x18
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
