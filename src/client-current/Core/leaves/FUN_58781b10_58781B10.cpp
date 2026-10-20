// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58781B10 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_58781b10_58781B10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EF 63 D0 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x63
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FE 63 D0 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x63
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 8F EB FF FF: call 0x587806d0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 CD EB FF FF: call 0x58780720
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ret
    }
}
