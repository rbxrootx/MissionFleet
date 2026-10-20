// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00412C50 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_00412c50_00412C50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 44h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 59 E7 FE FF: call 0x4013d9
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov ecx, eax
        ; Exact mapped bytes E8 56 EA FE FF: call 0x4016e0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 59 21 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x21
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
