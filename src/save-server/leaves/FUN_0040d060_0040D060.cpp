// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040D060 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_0040d060_0040D060() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        lea edi, [ebp - 44h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 7B 45 FF FF: call 0x4015ff
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx], edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 AA 42 FF FF: call 0x401348
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 45 7D 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x7d
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
