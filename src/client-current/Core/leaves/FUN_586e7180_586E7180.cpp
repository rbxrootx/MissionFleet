// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E7180 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_586e7180_586E7180() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586e719b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 1a4h]
        ; Exact mapped bytes 7D 40: jge 0x586e71e9
        __asm _emit 0x7d
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 0d8h]
        ; Exact mapped bytes E8 F5 E5 DA FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xe5
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + edx*8 + 14ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0f4h]
        ; Exact mapped bytes E8 D6 E5 DA FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xe5
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*8 + 150h], eax
        ; Exact mapped bytes EB A9: jmp 0x586e7192
        __asm _emit 0xeb
        __asm _emit 0xa9
        mov eax, dword ptr [ebp - 8]
        add eax, 14ch
        mov esp, ebp
        pop ebp
        ret
    }
}
