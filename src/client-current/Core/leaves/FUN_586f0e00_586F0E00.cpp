// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586F0E00 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_586f0e00_586F0E00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 9C 49 DA FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x49
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 7ch]
        ; Exact mapped bytes 7D 27: jge 0x586f0e43
        __asm _emit 0x7d
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 70h]
        ; Exact mapped bytes E8 80 49 DA FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x49
        __asm _emit 0xda
        __asm _emit 0xff
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4E A3 0C 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
