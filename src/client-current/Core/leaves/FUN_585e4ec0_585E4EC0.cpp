// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E4EC0 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_585e4ec0_585E4EC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1070ch], 1
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 2E 0B EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x0b
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 7d000h
        cdq
        idiv ecx
        mov edx, dword ptr [ebp + 8]
        sub edx, eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10710h], edx
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 08 0B EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x0b
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 5dc00h
        cdq
        idiv ecx
        mov edx, dword ptr [ebp + 0ch]
        sub edx, eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10714h], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
