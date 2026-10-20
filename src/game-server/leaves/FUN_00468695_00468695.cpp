// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00468695 .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_00468695_00468695() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E8 4E CE 0C 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 17 01 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 9ch]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 8], ecx
        pop esi
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 F7 00 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x00
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
