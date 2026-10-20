// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00422230 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_00422230_00422230() {
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
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AA F5 FD FF: call 0x401807
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf5
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BC F3 FD FF: call 0x401622
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 7A 2B 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x2b
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
