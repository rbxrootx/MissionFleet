// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E6586 .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_004e6586_004E6586() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0b0h
        push 5c7c98h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 BB 4B 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 14: jne 0x4e65c1
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b1h
        push 5c7c98h
        ; Exact mapped bytes E8 44 E4 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xe4
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e65c1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x4e65a5
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        push -1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp + 8]
        add eax, dword ptr [ecx + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 04 FC FF FF: call 0x4e61eb
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        lea eax, [ecx + edx*4]
        push eax
        ; Exact mapped bytes E8 0F 00 00 00: call 0x4e6616
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
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
