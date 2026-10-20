// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586F0DB0 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_586f0db0_586F0DB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 EC 49 DA FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x49
        __asm _emit 0xda
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 7E 27: jle 0x586f0df0
        __asm _emit 0x7e
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 D3 49 DA FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x49
        __asm _emit 0xda
        __asm _emit 0xff
        sub eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A1 A3 0C 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
