// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041053C .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_0041053c_0041053C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0fch], 2
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 100h]
        mov dword ptr [ecx + 170h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 100h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 100h], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 17ch], 1
        push 0
        push 0
        push 0
        push 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10ch]
        push eax
        push 80020112h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 88 6C 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 27 82 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x82
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
