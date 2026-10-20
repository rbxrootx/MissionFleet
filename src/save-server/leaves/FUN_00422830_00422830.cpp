// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00422830 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_00422830_00422830() {
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
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 2F F0 FD FF: call 0x40188e
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xf0
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8]
        sub eax, dword ptr [edx]
        sar eax, 2
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 07 F0 FD FF: call 0x401889
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xf0
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 61 25 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
