// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58771EA0 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_58771ea0_58771EA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4B FD FF FF: call 0x58771c00
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x58771ef1
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 8]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A0 2B D1 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x2b
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 8]
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [eax + edx], 0ffffffffh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 8]
        mov eax, 4
        shl eax, 0
        mov dword ptr [edx + eax], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
