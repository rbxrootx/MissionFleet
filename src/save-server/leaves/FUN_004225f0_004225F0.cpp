// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004225F0 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_004225f0_004225F0() {
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
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 1D EA FD FF: call 0x401037
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp + 8]
        add edx, 4
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        push eax
        ; Exact mapped bytes E8 07 EA FD FF: call 0x401037
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        add ecx, 8
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 8
        push edx
        ; Exact mapped bytes E8 F0 EF FD FF: call 0x401636
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 9A 27 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x27
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
