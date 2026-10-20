// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040447D .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_0040447d_0040447D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 0ch], 280h
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 184h]
        mov dword ptr [ebp - 14h], ecx
        lea edx, [ebp - 0ch]
        push edx
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 F8 F2 FF FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 67: je 0x404536
        __asm _emit 0x74
        __asm _emit 0x67
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 184h]
        and eax, 1fh
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 184h]
        and edx, 3e0h
        sar edx, 5
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 180h]
        shl ecx, 7
        mov edx, dword ptr [ebp - 18h]
        lea eax, [edx + ecx + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + ecx*4 + 40ch]
        not ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [eax + edx*4]
        and eax, ecx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 180h]
        shl edx, 7
        mov ecx, dword ptr [ebp - 18h]
        lea edx, [ecx + edx + 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4], eax
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 A0 42 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x42
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
