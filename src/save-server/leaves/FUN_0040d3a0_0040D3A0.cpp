// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040D3A0 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_0040d3a0_0040D3A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push ebx
        push esi
        push edi
        lea edi, [ebp - 40h]
        mov ecx, 10h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 3C 3C FF FF: call 0x401005
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop edi
        pop esi
        pop ebx
        add esp, 40h
        cmp ebp, esp
        ; Exact mapped bytes E8 17 7A 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x7a
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
