// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00420DA0 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_00420da0_00420DA0() {
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
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 08: je 0x420dd5
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x420de0
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C5 05 FE FF: call 0x4013a2
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        add esp, 4ch
        cmp ebp, esp
        ; Exact mapped bytes E8 F8 3F 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x3f
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
