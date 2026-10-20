// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00577CD0 .. +0x70 bytes.
extern "C" __declspec(naked) void __0CPrintingDialog__QAE_PAVCWnd___Z_00577CD0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 580119h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AE 7E F7 FF: call 0x4efba2
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x7e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58af44h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 7802h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AB 62 FC FF: call 0x53dfc0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 5de520h
        ; Exact mapped bytes E8 71 00 00 00: call 0x577d90
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 0ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
