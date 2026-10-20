// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00422F70 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_00422f70_00422F70() {
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
        ; Exact mapped bytes E8 E5 E4 FD FF: call 0x401479
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx], edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 2D E2 FD FF: call 0x4011db
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xe2
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 35 1E 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
