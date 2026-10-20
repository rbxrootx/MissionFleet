// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00518BD7 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_00518bd7_00518BD7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        xor eax, eax
        cmp dword ptr [ebp + 0ch], 0
        setne al
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        neg ecx
        sbb ecx, ecx
        and ecx, 2
        mov edx, dword ptr [ebp - 4]
        or edx, ecx
        mov dword ptr [ebp - 4], edx
        push -1
        mov eax, dword ptr [ebp - 4]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DB F7 FF FF: call 0x5183eb
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
