// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040BF40 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_0040bf40_0040BF40() {
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
        add ecx, 2
        ; Exact mapped bytes E8 70 51 FF FF: call 0x4010dc
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0D 51 FF FF: call 0x401082
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 6E 8E 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x8e
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
