// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426600 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_00426600_00426600() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 48h]
        mov ecx, 12h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        push 1ch
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 96 F2 03 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xf2
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x42663f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7D 0F: jge 0x426654
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + edx*4], 0ffffffffh
        ; Exact mapped bytes EB E2: jmp 0x426636
        __asm _emit 0xeb
        __asm _emit 0xe2
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [ecx + 19h], 0ffh
        pop edi
        pop esi
        pop ebx
        add esp, 48h
        cmp ebp, esp
        ; Exact mapped bytes E8 88 E7 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xe7
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
